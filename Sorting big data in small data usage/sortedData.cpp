#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

const int max_size = (1*1024*1024)*10; // = ((1 * 1024 * 1024)*10);
std::vector<std::string> names; // txt files

void randomn()
{
    std::ofstream file("rand.txt", std::fstream::app);

    for (int i = 0; i < max_size; ++i)
    {
        file << abs(rand() % RAND_MAX) << std::endl;
    }
    file.close();
}

void sorting_files(std::vector<int> &vec, std::string &str)
{
    std::ofstream ofile;
    ofile.open(str);
    std::sort(vec.begin(), vec.end());
    for (int i = 0, k = 1; i < vec.size(); ++i)
    {
        if(vec.size() != k)
        {
            ofile << vec[i] << '\n';
        }
        else
        {
            ofile << vec[i];
        }
    }
    ofile.close();
}

void read_and_load()
{
    std::vector<int> vec;
    int index = 0;

    std::ifstream ifile;
    ifile.open("rand.txt");
    std::string line;
    if (ifile.is_open())
    {
        while (!ifile.eof())
        {
            names.push_back(std::to_string(index) + "part.txt");
            while (!ifile.eof() && vec.size() < max_size / 5)
            {
                std::getline(ifile, line);
                vec.push_back(stoi(line));
            }
            sorting_files(vec, names[index]);
            ++index;
            vec.clear();
        }
    }
    ifile.close();
}

void sorting_main()
{
    std::ofstream finale;
    finale.open("sorted.txt");
    std::vector<std::pair<std::ifstream, std::string>> files(names.size());
    std::vector<std::pair<int, std::pair<std::ifstream,std::string>*>> vec;
    for (int i = 0; i < names.size(); ++i)
    {
        files[i].first.open(names[i]);
    }

    for (int i = 0; i < names.size(); ++i)
    {
        std::getline(files[i].first, files[i].second);
        vec.push_back(std::make_pair(stoi(files[i].second), &files[i]));
    }

    std::sort(vec.begin(), vec.end());
    for (int i = 0; i < files.size(); ++i)
    {
        while (!vec[0].second->first.eof())
        {
            finale << vec[0].first << std::endl;
            std::getline(vec[0].second->first, vec[0].second->second);
            if (vec[0].second->second != "")
            {              
                vec[0].first = stoi(vec[0].second->second);
                std::sort(vec.begin(), vec.end());
            }
            else
            {
                vec.erase(vec.begin());
            }
        }
    }
    for (int i = 0; i < names.size(); ++i)
    {
        files[i].first.close();
    }
    finale.close();
}

int main()
{
    // randomn();
    // read_and_load();
    // sorting_main();
}
