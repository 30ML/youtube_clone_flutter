import 'package:flutter/material.dart';
import 'package:youtube_clone_flutter/controller/getx_controller.dart';
import 'package:youtube_clone_flutter/video_overlay_with_title_widget.dart';

class OverlayService {
  addVideoTitleOverlay(BuildContext context, Widget widget) {
    OverlayEntry overlayEntry = OverlayEntry(
        builder: (context) => VideoOverlayWithTitleWidget(
              onClear: () {
                getx.deactivateOverlay(context);
              },
              widget: widget,
            ));
    getx.activateOverlay(context, overlayEntry);
  }
}
