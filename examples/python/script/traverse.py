import os, sys
import stack

class Traverse(object):
  def __init__(self, dir):
    self.dir = dir
    self.files = []
    self.dirs = []
  def walk(self):
    dirStack = stack.Stack()
    dirStack.push( self.dir )
    while not dirStack.empty():
      currDir = dirStack.top()
      dirStack.pop()
      files = os.listdir( currDir )
      for x in files:
        if os.path.isdir(x):
          self.dirs.append(x)
          dirStack.push(x)
        else:
          self.files.append(x)

if __name__ == '__main__':
  dir = os.getcwd()
  t = Traverse(dir)
  t.walk()
  print t.files
  print t.dirs
