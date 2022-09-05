#!/usr/bin/env python

import os
import time
# Opening file
file = open('can_log.asc', 'r')
count = 0

can_ids = [602, 603]

for line in file:
    str_line = line.split()
    if (len(str_line) > 2):
        for id in can_ids:
            if str(id) in str_line:
                data = ''.join(str(byte) for byte in str_line[6:])
                cmd = "cansend can0 " + str(id) + "#" + data
                print(cmd)
                # This timestamp is based on the current log
                # time.sleep(0.140)
                time.sleep(5)
                os.system(cmd)

file.close()
