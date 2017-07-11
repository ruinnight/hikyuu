#!/usr/bin/python
# -*- coding: utf8 -*-
# cp936

import urllib.request
import subprocess
import time
import sys
import os
 
if __name__ == "__main__":

    starttime = time.time()
    
    net_filename = 'http://www.qianlong.com.cn/download/history/weight.rar'

    data_config_file = os.path.expanduser('~') + "/.hikyuu/data_dir.ini"
    data_config = configparser.ConfigParser()
    data_config.read(data_config_file)
    data_dir = data_config['data_dir']['data_dir']

    dest_filename = data_dir + "/weight/weight.rar"
    dest_dir = data_dir + "/weight"

    if not os.path.lexists(dest_dir):
        os.mkdir(dest_dir)
    
    if sys.platform == 'win32':
        subprocess.call(['del', dest_filename], shell=True)
    else:
        subprocess.call(['rm', dest_filename])

    urllib.request.urlretrieve(net_filename, dest_filename)
    subprocess.call(['unrar', 'x', '-o+', dest_filename, dest_dir])
    subprocess.call(['importdata'])
    
    endtime = time.time()
    print("%.2fs" % (endtime-starttime))
    print("%.2fm" % ((endtime-starttime)/60))
    
    
