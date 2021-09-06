# 1. Style guide
- We follow [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html) guideline.

# 2. Code check tool
## 2.1. Formating
```shell
./run_check.sh format
```

## 2.2. Linting
```shell
./run_check.sh lint
```

## 2.3. Documentation
```shell
./run_check doc_check
```

## 2.4. Formating, Linting, and documentation checking all at once
```shell
./run_check.sh all
```

# 3. Unit testing
```shell
mkdir build
cd build
cmake .. && make && make test
```

# 4. Commit
* **DO NOT** commit on `main` branch. Make a new branch and commit and create a PR request.
* Formatting and linting is auto-called when you `commit` and `push` but we advise you to run `./run_check all` occasionally.

# 5. Documentation
## Install Doxygen
```shell
git clone -b Release_1_9_2 https://github.com/doxygen/doxygen.git
cd doxygen
mkdir build
cd build
cmake -G "Unix Makefiles" .. 
make
make install
```

## 5.1. Generate API document
```shell
doxygen
```

## 5.2. Run local documentation web server
```shell
cd html
python -m http.server
```
