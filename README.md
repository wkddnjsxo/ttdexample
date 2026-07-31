# ttdexample

C로 작성한 함수를 GCC로 빌드하고, C++ GoogleTest로 검증하는 TTD 연습 프로젝트입니다.

## 요구 사항

- GCC/G++ 11 이상
- CMake 3.20 이상
- 인터넷 연결: configure 단계에서 GoogleTest 1.14.0을 내려받습니다.

## 빌드 및 테스트

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++
cmake --build build --parallel
ctest --test-dir build --output-on-failure
```

테스트 실행 파일만 직접 실행하려면 다음 명령을 사용합니다.

```bash
./build/calculator_test
```
