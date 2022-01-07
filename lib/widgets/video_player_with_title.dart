import 'package:flutter/material.dart';
import 'package:video_player/video_player.dart';
import 'package:youtube_clone_flutter/constants.dart';
import 'package:youtube_clone_flutter/controller/getx_controller.dart';

class VideoPlayerWithTitle extends StatefulWidget {
  const VideoPlayerWithTitle({Key? key}) : super(key: key);

  @override
  _VideoPlayerWithTitleState createState() => _VideoPlayerWithTitleState();
}

class _VideoPlayerWithTitleState extends State<VideoPlayerWithTitle> {
  late VideoPlayerController _videoPlayerController;
  double aspectRatio = 16 / 9;
  bool isPipMode = getx.isPipMode as bool;

  _initVideo() {
    _videoPlayerController = VideoPlayerController.network(
      "https://file-examples.com/wp-content/uploads/2017/04/file_example_MP4_640_3MG.mp4",
    )
      ..setLooping(false)
      ..play();
  }

  @override
  void initState() {
    _initVideo();
    super.initState();
  }

  @override
  void dispose() {
    _videoPlayerController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Column(
      mainAxisSize: MainAxisSize.min,
      children: [
        if (!isPipMode) const SizedBox(height: 32),
        _buildVideoPlayer(),
        // if (!isPipMode) Expanded(child: _buildVideosList()),
      ],
    );
  }

  Widget _buildVideoPlayer() {
    return Stack(
      children: [
        Row(
          children: [
            AnimatedContainer(
              duration: const Duration(milliseconds: 250),
              width: isPipMode
                  ? (Constants.VIDEO_TITLE_HEIGHT_PIP * aspectRatio)
                  : MediaQuery.of(context).size.width,
              color: Colors.black,
              constraints: BoxConstraints(
                maxWidth: MediaQuery.of(context).size.width,
              ),
              child: AspectRatio(
                aspectRatio: aspectRatio,
                child: VideoPlayer(
                  _videoPlayerController,
                ),
              ),
            ),
            if (isPipMode)
              Expanded(
                child: InkWell(
                  onTap: () {
                    getx.disablePip();
                  },
                  child: Padding(
                    padding: const EdgeInsets.all(8),
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      mainAxisSize: MainAxisSize.min,
                      children: [
                        const Text("This is Title"),
                        Text(
                          "This is Description",
                          style: Theme.of(context).textTheme.caption,
                        ),
                      ],
                    ),
                  ),
                ),
              ),
            if (isPipMode)
              IconButton(
                icon: Icon(
                  _videoPlayerController.value.isPlaying
                      ? Icons.pause
                      : Icons.play_arrow,
                ),
                onPressed: () {
                  if (_videoPlayerController.value.isPlaying) {
                    _videoPlayerController.pause();
                  } else {
                    _videoPlayerController.play();
                  }
                },
              ),
            if (isPipMode)
              IconButton(
                icon: const Icon(Icons.close),
                onPressed: () {
                  getx.deactivateOverlay(context);
                },
              ),
          ],
        ),
      ],
    );
  }
}
