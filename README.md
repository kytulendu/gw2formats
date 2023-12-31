gw2formats
==========

Library used for reading Guild Wars 2's files in a type-safe manner. It is not the intention of 
this library to help you identify the data contained in the files. This library works best if you
know what data you are after and just want to get to it.

The library is entirely type-safe, meaning you will get a compile-time error if you try to read a
chunk of a type that is unsupported by the file you have loaded. Such as loading a DX9S chunk from
a model file.

Usage
-----

As an example, maybe you are writing a map viewer and want to get to the height map:

    gw2f::pf::MapPackFile mapFile(filename);
    auto terrainChunk = mapFile.chunk<gw2f::pf::MapChunks::Terrain>();
    auto& heightMap   = terrainChunk.heightMapArray;

See the samples folder for other examples.

Restrictions
------------

This library use some of C++11 feature, it need C++11 capable compiler in order to compile it.

It have been tested with GCC 10.3.0 and Visual Studio 2022.

Contributing
------------

For contributions, please go to [this project's page on GitHub](https://github.com/kytulendu/gw2formats).
