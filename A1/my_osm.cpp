#include "my_osm.h"

#include <iostream>
#if defined(__OPENMP)
#include <omp.h>
#endif
#include <osmpbf/osmfile.h>
#include <osmpbf/inode.h>
#include <osmpbf/iway.h>
#include <osmpbf/irelation.h>
#include <osmpbf/filter.h>
#include <osmpbf/primitiveblockinputadaptor.h>


MyOSM::MyOSM(QObject *parent) : QObject(parent)
{
    std::cout << "MyOSM Object was created successfully";

    QString inputFileName = "../baden-wuerttemberg-latest.osm.pbf";
    osmpbf::OSMFileIn inFile(inputFileName, false);

    if (!inFile.open()) {
        std::cout << "Failed to open " <<  inputFileName << std::endl;
        return -1;
    }
}

