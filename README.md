# Extended Doby Project
* Using C++, CMake, Qt
* Planning
## Environments
* Ubuntu 22.04.2 LTS
```
# install Qt
sudo apt-get update
sudo apt-get install qtbase5-dev
qmake -v # Check Qt (1)
dpkg -l | grep qt # Check Qt (2)
```
## Build
```
# WSL
~~~
# build
mkdir build
cd build
cmake ../srcs
make
./Main
```