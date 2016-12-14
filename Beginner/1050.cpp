#include <iostream>
#include <utility>
#include <vector>

std::vector<std::pair<int, std::string> > makeList(void) {
    std::vector<std::pair<int, std::string> > data;

    data.push_back(std::make_pair(61, "Brasilia"));
    data.push_back(std::make_pair(71, "Salvador"));
    data.push_back(std::make_pair(11, "Sao Paulo"));
    data.push_back(std::make_pair(21, "Rio de Janeiro"));
    data.push_back(std::make_pair(32, "Juiz de Fora"));
    data.push_back(std::make_pair(19, "Campinas"));
    data.push_back(std::make_pair(27, "Vitoria"));
    data.push_back(std::make_pair(31, "Belo Horizonte"));

    return data;
}

std::string solve(const int ddd, const std::vector<std::pair<int, std::string> >& data) {
    for (unsigned i = 0; i < data.size(); i++) {
        if (data.at(i).first == ddd) {
            return data.at(i).second;
        }
    }
    return "DDD nao cadastrado";
}

int main(void) {
    std::vector<std::pair<int, std::string> > data = makeList();
    int ddd = 0;

    while (std::cin >> ddd) {
        std::cout << solve(ddd, data) << std::endl;
    }

    return 0;
}
