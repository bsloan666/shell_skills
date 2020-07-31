import os
import sys
import shutil

# get the data directory's parent directory
root = os.path.abspath(os.path.dirname(os.path.dirname(os.path.dirname(__file__))))

# create the newfolder directory if it does not already exist 
dst_dir = os.path.join(root, 'data', 'newfolder')
if not os.path.exists(dst_dir):
    os.mkdir(dst_dir)

# get the list of files in the source directory
src_dir =  os.path.join(root, 'data', 'folder')
files = os.listdir(src_dir)

# for each file in source, copy it to the destination
for infile in files:
    name, ext = os.path.splitext(infile)
    shutil.copy(os.path.join(src_dir,infile), os.path.join(dst_dir, name.upper()+ext))


