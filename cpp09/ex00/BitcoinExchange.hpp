#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <string>
# include <fstream>
# include <sstream>
# include <cctype>

class BitcoinExchange
{
    private:
        std::map<std::string, double> m_bitcoin_prices;

        void loadDatabase(const std::string& db_filename);
        bool validateDate(const std::string& date);
        bool isLeapYear(int year);
        bool getExchangeRate(const std::string& date, double& rate);
        std::string trim(const std::string& str);
    
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();

        void processInputFile(const std::string& input_filename);

};

#endif