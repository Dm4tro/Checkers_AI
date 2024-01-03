#pragma once
#include "Move.h"
#include "ChekerTable.h"
#include "list"
class RangeTakeRule
{
public:

	RangeTakeRule() {
	}


	bool validate(const Move& move, const ChekerTable& table) {
		list <Coordinate> temp = move.getPath();
        

		int temp1=0;
		
        auto it = temp.begin();
        const Coordinate& coordinate = *it;
        temp1 = coordinate.getY();
        if (it != temp.end()) {
            
            ++it;  
        }

        for (; it != temp.end(); ++it) {
            const Coordinate& coordinate1 = *it;
            if (coordinate1.getY() + 2 != temp1 || coordinate1.getY() - 2 != temp1) {
                return false;
            }
			temp1 = coordinate1.getY();
        }

		return true;
	}
};