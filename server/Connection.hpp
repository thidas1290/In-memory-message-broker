#pragma once

#include <iostream>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "ConnectionHandler.hpp"


class Connection
{
private:
    int _fd = -1;    
    ConnectionHandler *_handler;
public:

    Connection(ConnectionHandler *handler):
    _handler(handler)
    {
        _handler->onAttached(this);
    }

    virtual void process() = 0;

};