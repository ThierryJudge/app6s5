#include "transport.h"



void send_messages(char * message, int length)
{
    int nb_messages = length / 73 + (length % 73 != 0);
    
    for(int i = 0; i < nb_messages-1; i++)
    {
        char trame_message[73];
        for(int j = 0; j < 73; j++)
        {
            trame_message[j] = message[i*73 + j];
        }

        create_trame(trame_message, 73);
    }

    if(length % 73 != 0)
    {
        char trame_message[73];
        for(int j = 0; j < length % 73; j++)
        {
            trame_message[j] = message[j];
        }

        create_trame(trame_message, length % 73);
    }

}