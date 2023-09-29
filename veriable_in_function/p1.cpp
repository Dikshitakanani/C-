#include <iostream>

int maths, sci, eng, total;
float per;

void clac()
{
    total = maths + eng + sci;
    per = total / 3;
}

void setdata()
{
    std::cout << "\nenter maths marks--->";
    std::cin >> maths;
    std::cout << "\nenter english marks--->";
    std::cin >> eng;
    std::cout << "\nenter sci marks--->";
    std::cin >> sci;
    std::cout << "\ntotal is---> " << total << std::endl;
    std::cout << "\npercentage is---> " << per << std::endl;
}

int main()
{
    setdata();
    clac();
}
