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

package designtest;

import designtest.sink.ISink;
import designtest.ParallelChannel;


network DataGeneration
{
    parameters:
        string sinkType;

        @display("bgb=204,169");
    submodules:
        generator: Generator {
            @display("p=50,78");
        }
        sink: <sinkType> like ISink {
            @display("p=136,78");
        }
    connections:
        generator.data --> ParallelChannel --> sink.data;
}
