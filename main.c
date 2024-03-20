#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "seagull_op.h"


int main(int argc, char *argv[]) {
    printf("Seagull Single NNOP Performance Test\n");
    printf("=====================================\n");
    // 测试lrelu
    printf("Batch Size: 1000\n");
    op_test_lrelu_run(1000);
    printf("Batch Size: 10000\n");
    op_test_lrelu_run(10000);
    printf("Batch Size: 100000\n");
    op_test_lrelu_run(100000);
    printf("Batch Size: 1000000\n");
    op_test_lrelu_run(1000000);
    printf("=====================================\n");
    // 测试gemm
    printf("Batch Size: 100\n");
    op_test_gemm_run(100);
    printf("Batch Size: 1000\n");
    op_test_gemm_run(1000);
    printf("Batch Size: 10000\n");
    op_test_gemm_run(10000);
    printf("=====================================\n");


    return 0;
}
