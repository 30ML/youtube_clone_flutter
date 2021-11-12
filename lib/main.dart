import 'package:flutter/material.dart';

import 'screens/main_screens.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter_UI_Examples',
      theme: ThemeData(
        appBarTheme: const AppBarTheme(
          // elevation: 0,
          titleTextStyle: TextStyle(
            color: Colors.black,
            fontSize: 20,
          ),
          actionsIconTheme: IconThemeData(
            color: Colors.black,
            size: 15,
          ),
          centerTitle: true,
        ),
      ),
      initialRoute: '/',
      routes: {
        '/': (context) => MainScreens(),
      },
    );
  }
}
