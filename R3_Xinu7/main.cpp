#include <iostream>
#include <memory>
using std::shared_ptr;
using std::weak_ptr;
using std::cout;
using std::endl;

int main()
{
    shared_ptr<int> sp1(new int(10));
    shared_ptr<int> sp2(sp1);
    weak_ptr<int> wp(sp2);
    //输出和 wp 同指向的 shared_ptr 类型指针的数量
    cout << wp.use_count() << endl;
    //释放 sp2
    sp2.reset();
    cout << wp.use_count() << endl;
    //借助 lock() 函数，返回一个和 wp 同指向的 shared_ptr 类型指针，获取其存储的数据
    cout << *(wp.lock()) << endl;
    return 0;
}