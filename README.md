[![Build Status](https://travis-ci.org/dthg/column_store.svg?branch=master)](https://travis-ci.org/dthg/column_store)
A simple proof of concept for a columnar data format.

Conceptually this aims to convert a collection of some type `T` and writing columns (struct member) to disk.
It will also support reading and deserialising data stored in this format. 

### Aims:
 - Simple:
  The code should be straight forward and easy to follow, and where things do get more complex they should be well documented.
 - Well tested:
  Storing data in a reliable fashion is difficult and full of edge cases. Lots of test are needed to make sure that
  what is actually being read/written is correct.
 - Open to outside contributions:
  Anyone wishing to contribute in any way to this project is more than welcome to.

### Disclaimers:
 - This project is **not** production ready, nor does it ever aim to be. This is a __play__ project, a way for me 
  to get more familiar with `c++` and columnar storage formats.
