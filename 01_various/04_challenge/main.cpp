#include "unique_ptr.hpp"

#include <iostream>

int main() {
    // unique_int_ptr インスタンスを作成
    unique_int_ptr my_int(3);

    // 間接参照して値を表示
    std::cout << *my_int << std::endl;

    // ポインタの制御を放棄
    int* released_ptr = my_int.release();

    // メモリを解放
    delete released_ptr;

    return 0;
}