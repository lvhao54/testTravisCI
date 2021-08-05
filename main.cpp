#include <iostream>
class CopyObj
{
public:
        CopyObj()
        {
                std::cout << "CopyObj "<<std::endl;
        }
        ~CopyObj()
        {}
};
class CopyTest
{
public:`在这里插入代码片`
        CopyTest(){}
        ~CopyTest(){}
        CopyObj copyExecute()
        {
                return obj;
        }
private:
        CopyObj obj;
};
int main()
{
        CopyTest cop;
        std::cout<<"Hello World! "<<std::endl;
        auto obj1 = cop.copyExecute();
        return 0;
}
