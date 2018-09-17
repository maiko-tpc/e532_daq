#!/bin/sh
#./vsca_stop.sh
./vsca_clear.sh
./vsca_start.sh
printf "Scaler running...\n"
sleep 10s
./vsca_stop.sh
printf "Finished.\n"o