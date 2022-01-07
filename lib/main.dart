import 'package:flutter/material.dart';
import 'package:get/get.dart';
import 'package:youtube_clone_flutter/controller/getx_controller.dart';
import 'package:youtube_clone_flutter/video_overlay_with_title_widget.dart';
import 'package:youtube_clone_flutter/widgets/video_player_with_title.dart';

void main() => runApp(const MyApp());

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return GetMaterialApp(
      title: 'YoTube',
      theme: ThemeData(
        primaryColor: Colors.blue,
      ),
      home: MyHomePage(),
    );
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({Key? key}) : super(key: key);

  @override
  _MyHomePageState createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  _addVideoWithTitleOverlay() {
    getx.activateOverlay(context, VideoPlayerWithTitle());
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text("YoTube"),
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            // ElevatedButton(
            //   onPressed: () {
            //     _addVideoOverlay();
            //   },
            //   child: const Text("Add Video With Drag Overlay"),
            // ),
            // const SizedBox(height: 10),
            ElevatedButton(
              onPressed: () {
                _addVideoWithTitleOverlay();
              },
              child: const Text("Add Video With Title Overlay"),
            ),
          ],
        ),
      ),
    );
  }
}
