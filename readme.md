Seagull 算子性能测试
========

## build
- 修改 CMakeLists.txt 中 `set(CMAKE_CROSSCOMPILING TRUE)` 为 `set(CMAKE_CROSSCOMPILING False)`
```sh
mkdir build && cd build
cmake ..
ninja # or make -j4
```
## 运行

- 直接运行build目录中的 `./seagull_op_test`

## 性能统计

| 算子 | batch | 标量时间（ms）| RVV时间（ms）|
|----|----|----|----|
|Leaky Relu| 1000 |0.007|0.003|
|Leaky Relu|10000 |0.081|0.020|
|Leaky Relu|100000|0.619|0.244|
|Leaky Relu|1000000|6.002|2.689|
|GEMM 1X4| 100| 0.008| 0.005|
|GEMM 1X4|1000| 0.560| 0.235|
|GEMM 1X4|5000| 13.385| 5.317|
|GEMM 1X4|10000|40.238|21.514|
|GEMM RELU 1X4| 100| 0.013| 0.005|
|GEMM RELU 1X4|1000| 0.478| 0.233|
|GEMM RELU 1X4|5000| 11.928| 5.612|
|GEMM RELU 1X4|10000|37.494|21.490|
|GEMM RELU 2X4| 100| 0.012| 0.006|
|GEMM RELU 2X4|1000| 0.600| 0.186|
|GEMM RELU 2X4|5000| 13.296| 3.838|
|GEMM RELU 2X4|10000|44.389|14.990|
|PRelu | 1000| 0.015|0.028|
|PRelu |10000|0.408|0.253|
|PRelu |100000|3.612|2.509|
|PRelu |1000000|36.614|25.328|
