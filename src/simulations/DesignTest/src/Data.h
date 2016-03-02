/*
 * Data.h
 *
 *  Created on: Mar 2, 2016
 *      Author: franz
 */

#ifndef DATA_H_
#define DATA_H_

#include <array>

enum class DataType
{
    EventData = 0, HistoricalData = 1, ConfigData = 2
};

class Data
{
    public:
        using Packet = std::array<unsigned char, 64>;

        DataType type;
        Packet data;
};

#endif /* DATA_H_ */
