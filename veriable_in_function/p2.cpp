#include<iostream>

void clac()
{
    int maths, sci, eng, total;
    float per;
    total = maths + eng + sci;
    per = total / 3.0;
    std::cout << "\ntotal is---> " << total << std::endl;
    std::cout << "\npercentage is---> " << per << std::endl;
}

void setdata()
{
    int maths, sci, eng, total;
    float per;
    std::cout << "\nenter maths marks--->";
    std::cin >> maths;
    std::cout << "\nenter english marks--->";
    std::cin >> eng;
    std::cout << "\nenter sci marks--->";
    std::cin >> sci;
}

int main()
{
    setdata();
    clac();
}
