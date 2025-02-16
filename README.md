# Bobots
Just a playground for some robotic ideas.

# Build
```
mkdir build
cd build
cmake ..
cmake --build .
```
# Editor support
From root, run the following to symlink the compile commands after building for editor support.
```
ln -s build/compile_commands.json .
```

# Todo

* Ability to represent a 'world'
* Simulate in timesteps
* Ability to represent bot state (actual as well as 'believed')
* Ability to build a controller (holds beliefs, gets sensor inputs, produces motor outputs)
* Ability to get sensor inputs
* Ability to produce motor outputs
