//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef __DESIGNTEST_HISTORICALQUEUEWRAPPER_H_
#define __DESIGNTEST_HISTORICALQUEUEWRAPPER_H_

#include <omnetpp.h>
#include <memory>

#include "Data.h"
#include "HistoricalQueue.h"

class HistoricalQueueWrapper : public OPP::cSimpleModule
{
        // Definitions
    private:
        using MsgPtr = std::unique_ptr<OPP::cMessage>;

        // Methods
    protected:
        virtual void initialize();
        virtual void handleMessage(OPP::cMessage *msg);

        // Member
    private:
        std::unique_ptr<HistoricalQueue> mQueue;
        OPP::cGate* mDataGate;
        OPP::cGate* mCmdGate;
};

#endif
