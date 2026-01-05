if [ ! -f build ]; then
  cmake -B build
fi

cmake --build build
./build/src/ingenium
