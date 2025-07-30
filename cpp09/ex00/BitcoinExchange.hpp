#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <sstream>
# include <stdexcept>
# include <ctime>

class BitcoinExchange {
public:
    BitcoinExchange();
    ~BitcoinExchange();

    void loadData(const std::string& filename);
    float getExchangeRate(const std::string& date) const;

private:
    std::map<std::string, float> exchangeRates;
};

#endif