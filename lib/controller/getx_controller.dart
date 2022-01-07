import 'package:flutter/material.dart';
import 'package:get/get.dart';

class ReactiveCommonController extends GetxController {
  OverlayEntry? overlayEntry;

  RxBool isPipMode = false.obs;
  RxDouble aspectRatio = 1.77.obs;

  enablePip(double aspect) {
    isPipMode = true as RxBool;
    aspectRatio = aspect as RxDouble;
    print("enablePip() CALL =>> PipMode: $isPipMode");
  }

  disablePip() {
    isPipMode = false as RxBool;
    print("disablePip() =>> PipMode: $isPipMode ");
  }

  activateOverlay(BuildContext context, OverlayEntry? overlay) {
    if (overlayEntry != null) {
      overlayEntry!.remove();
    }
    overlayEntry = null;
    isPipMode = false as RxBool;
    Overlay.of(context)!.insert(overlayEntry!);
    overlayEntry = overlay;
  }

  deactivateOverlay(BuildContext context) {
    if (overlayEntry != null) {
      overlayEntry!.remove();
    }
    overlayEntry = null;
  }
}

final getx = Get.put(ReactiveCommonController());
