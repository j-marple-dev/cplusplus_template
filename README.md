# cplusplus_template
This repository is base project template for C++

# Features
## Continuous Integration (CI)
  - Formating
  - Linting
  - Unit testing
  - API document generation
  - GitHub action

## Docker support
```shell
git clone https://github.com/j-marple-dev/cplusplus_template.git
cd cplusplus_template
./run_docker.sh build
# You can add build options
# ./run_docker.sh build --no-cache

./run_docker.sh run
# You can add running options
# ./run_docker.sh run -v $DATA_PATH:/home/user/data

# Re-run last docker container
./run_docker.sh exec
```

# Build
```shell
git clone https://github.com/j-marple-dev/cplusplus_template.git
cd cplusplus_template
mkdir build
cd build
cmake ..
make
make test # Run unit test
```

# Developers
* Please refer to [CODE_OF_CONDUCT](CODE_OF_CONDUCT.md) guide.
