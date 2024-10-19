#pragma once

#include <iostream>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "Connection.hpp"


class ConnectionHandler
{
private:
      

public:

    ConnectionHandler()
    {
        
    }

    virtual void onAttached(Connection *conn)
    {
        
    }

    virtual void onMonitor(Connection *conn)
    {

    }
};