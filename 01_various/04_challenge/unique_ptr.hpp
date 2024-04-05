class unique_int_ptr {
private:
    int* ptr;

public:
    // コンストラクタ: ヒープに整数を割り当てる
    unique_int_ptr(int value) {
        ptr = new int(value);
    }

    // デストラクタ: 動的に割り当てられたメモリをクリーンアップ
    ~unique_int_ptr() {
        delete ptr;
    }

    // 格納されたポインタを返す
    int* get() {
        return ptr;
    }

    // ポインタの制御を放棄する
    int* release() {
        int* released_ptr = ptr;
        ptr = nullptr;
        return released_ptr;
    }

    // 独自の operator* を定義して間接参照をサポート
    int& operator*() {
        return *ptr;
    }
};

template<typename T>
class unique_ptr {
private:
    T* ptr;

public:
    // コンストラクタ: ヒープに整数を割り当てる
    unique_ptr(T value) {
        ptr = new T(value);
    }

    // デストラクタ: 動的に割り当てられたメモリをクリーンアップ
    ~unique_ptr() {
        delete ptr;
    }

    // 格納されたポインタを返す
    T* get() {
        return ptr;
    }

    // ポインタの制御を放棄する
    T* release() {
        T* released_ptr = ptr;
        ptr = nullptr;
        return released_ptr;
    }

    // 独自の operator* を定義して間接参照をサポート
    T& operator*() {
        return *ptr;
    }
};