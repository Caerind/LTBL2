# Let There Be Light 2

A 2D dynamic soft shadows system with accurate penumbras/antumbras.

This is a modified version of LTBL2 by Cmdu76

Install
-------

LTBL2 relies only on [SFML 2.4.0](http://www.sfml-dev.org/download/sfml/2.4.0/index.php)

Add the files to your project (sorry I don't know how to make CMake files)

Quick Start
-----------

See the example file (I will take time to add doc here in few commit)

Changes
-------

- Light management : use create...() to create your light and add it to the system and no shared pointers
- Quadtree : rebuilt entirely
- LightSystem : simplified render call and minor performance improvements
- Remove/change some hardcoded value
- LightPointEmission and LightPointDirection inherit from sf::Sprite 
- LightShape inherit from sf::ConvexShape
- Add resources direclty in C++ (PenumbraTexture, UnshadowShader & LightOverShapeShader)

License
-------

[See it here](LICENSE.md)