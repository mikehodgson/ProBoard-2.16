#include <string.h>
#include "proboard.hpp"

void
version_info(char *)
{
     LOG(2,"Version info requested");

     io << "\f\n\7"
     " 旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴커\n"
     " � ProBoard version " VERSION;

     for(int i=0;i<54-strlen(VERSION);i++) io << ' ';
     io << "�\n"
     //io << "\1(c) 1990-1996 Philippe Leybaert \7�\n"
               " �                                                                        �\n";
     io << "\7 � Copyright (c) 1990-1999  TeleGrafix Communications, Inc.               �\n";
     io << "\7 � All Rights Reserved                                                    �\n";
     io << "\7 냐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴캐\n"
          "\7 �                                                                        �\n";


     //----------------------------  
     // JDR: REGISTRATION REFERENCE
     //----------------------------  

     if(registered)
     {
          char buf[ 80 ];


          if ( max_node_count == 0 )
          {
               strcpy( buf, 
                       form( buf,
                             "%s (Unlimited nodes)",
                             software_serial_number() ) );
          }
          else
          {
               strcpy( buf,
                       form( "%s (%d nodes maximum)",
                             software_serial_number(),
                             max_node_count ) );
          }
          io << "\7 � \7Registered to:\6 " << form("%-36s",registered_user_name() ) << "\7                    �\n"
                "\7 �                \6"   << form("%-36s",cfg.bbsname ) << "\7                    �\n"
                "\7 � \7Serial number:\6 " << form("%-48.48s", buf ) << "\7        �\n"
                "\7 �                                                                        �\n";
     }
     else
     {
          io << " � \6UNREGISTERED EVALUATION VERSION                                        �\n"
                "\7 �                                                                        �\n";
     }


     io << "\7 냐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴캐\n";

     io <<   " � JAM(mbp) - Copyright 1993 Joaquim Homrighausen, Andrew Milner,         �\n"
          " �                           Mats Birch, Mats Wallin.                     �\n"
          " �                           ALL RIGHTS RESERVED.                         �\n";
     io << "\7 읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴켸\n\n  "
     << S_PRESS_ENTER_TO_CONTINUE;
}

