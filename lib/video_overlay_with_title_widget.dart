import 'package:flutter/material.dart';
import 'package:youtube_clone_flutter/constants.dart';
import 'package:youtube_clone_flutter/controller/getx_controller.dart';

class VideoOverlayWithTitleWidget extends StatefulWidget {
  final Function onClear;
  final Widget widget;

  // ignore: use_key_in_widget_constructors
  const VideoOverlayWithTitleWidget(
      {required this.onClear, required this.widget})
      : assert(true);

  @override
  State<VideoOverlayWithTitleWidget> createState() =>
      _VideoOverlayWithTitleWidgetState();
}

class _VideoOverlayWithTitleWidgetState
    extends State<VideoOverlayWithTitleWidget> {
  double? width;
  double? height;
  double? oldWidth;
  double? oldHeight;

  bool isPipMode = false;

  Offset offset = const Offset(0, 0);

  // Widget player;

  _onPipMode() {
    double aspectRatio = getx.aspectRatio as double;

    print("true   $aspectRatio");
//    Provider.of<OverlayHandlerProvider>(context, listen: false).enablePip();
    Future.delayed(const Duration(milliseconds: 100), () {
      print("true   Future.microtask");

      setState(() {
        isPipMode = true;
        width = oldWidth! - 32.0;
        height = Constants.VIDEO_TITLE_HEIGHT_PIP;
        print(oldHeight! - height! - Constants.BOTTOM_PADDING_PIP);
        offset =
            Offset(16, oldHeight! - height! - Constants.BOTTOM_PADDING_PIP);
//        height = (Constants.VIDEO_HEIGHT_PIP/aspectRatio) + 33;
      });
    });
  }

  _onExitPipMode() {
    Future.microtask(() {
      setState(() {
        isPipMode = false;
        width = oldWidth;
        height = oldHeight;
        offset = const Offset(0, 0);
      });
    });
    Future.delayed(const Duration(milliseconds: 250), () {
      getx.disablePip();
    });
  }

  @override
  Widget build(BuildContext context) {
    oldWidth = width = MediaQuery.of(context).size.width;
    oldHeight = height = MediaQuery.of(context).size.height;

    return AnimatedPositioned(
      duration: Duration(milliseconds: 150),
      left: offset.dx,
      top: offset.dy,
      child: Material(
        elevation: isPipMode ? 5.0 : 0.0,
        child: AnimatedContainer(
          height: height,
          width: width,
          child: widget.widget,
          duration: const Duration(milliseconds: 250),
        ),
      ),
    );
  }
}
