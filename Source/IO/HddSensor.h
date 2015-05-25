/*
 * Sensor.h
 *
 *  Created on: 7 May 2015
 *      Author: jeremy
 */

#ifndef SOURCE_IO_HDDSENSOR_H_
#define SOURCE_IO_HDDSENSOR_H_


#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <thread>
#include <chrono>


namespace IO
{

	class HddSensor
	{

	public:

		HddSensor(std::string filePath);
		~HddSensor();

		short GetOutput();
		int GetDataLength() { return value.size(); }

	private:

		std::ifstream* file;
		std::vector<short> value;

		unsigned int index;

	};

}

#endif /* SOURCE_IO_HDDSENSOR_H_ */
