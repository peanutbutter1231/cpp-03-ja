# チャレンジ4: スマートポインタの実装

## タスク1

`std::unique_ptr` の動作を模倣したシンプルなスマートポインタクラスを実装してください。このクラスでは動的に割り当てられた整数の所有権を管理する必要があります。

### 要件

- クラスの名前は `unique_int_ptr` とします。
- ヒープに整数を割り当てるコンストラクタを実装します。
- 動的に割り当てられたメモリをクリーンアップするデストラクタを実装します。
- 格納されたポインタを返す `get` メソッドを実装します。
- ポインタの制御を放棄する `release` メソッドを実装します。このメソッドでは格納されたポインタを返し、クラス内でポインタを `nullptr` に設定して再び使用されないようにします。

## タスク2

`unique_int_ptr` を簡単に間接参照して参照先の値を使用できるようにするには、このクラスに独自の `operator*` を定義する必要があります。このタスクでは、`operator*` を定義します。

### 要件

- クラスのインスタンスを次のように使用できるようにしてください。
  ```cpp
  unique_int_ptr my_int(3);
  std::cout << *my_int << std::endl;
  ```

## タスク3

前のタスクで作成したクラスの副次的なクラステンプレートを作成し、ユーザーが渡した組み込みのデータ型を管理してください。

### 要件

- クラスの名前は `unique_ptr` としてください。