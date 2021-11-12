import 'package:flutter/material.dart';

class Home extends StatefulWidget {
  @override
  _HomeState createState() => _HomeState();
}

class _HomeState extends State<Home> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        leading: IconButton(
          icon: const FlutterLogo(size: 80.0),
          onPressed: () {
            Navigator.of(context).pushNamed('/');
          },
        ),
        title: const Text('Flutter UI Examples'),
        actions: [
          IconButton(
            icon: const Icon(Icons.star),
            onPressed: () {},
          ),
          IconButton(
            icon: const Icon(Icons.settings),
            onPressed: () {},
          ),
        ],
        toolbarOpacity: 1.0,
        bottomOpacity: 0.5,
      ),
    );
  }
}
