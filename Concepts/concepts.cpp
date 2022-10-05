#include <algorithm>
#include <list>

void errorExample()
{
    std::list li{1,2,30,20,15};
    std::sort(li.begin(),li.end());
}

int main()
{
    errorExample();

    return 0;
}