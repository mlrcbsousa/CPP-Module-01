#!/bin/bash

echo
echo "===== No argument"
./harlFilter
echo "====="

echo
echo "===== Invalid level"
./harlFilter FOO
echo "====="

echo
echo "===== DEBUG (should print all log levels)"
./harlFilter DEBUG
echo "====="

echo
echo "===== INFO (should print INFO, WARNING and ERROR log levels)"
./harlFilter INFO
echo "====="

echo
echo "===== WARNING (should print WARNING and ERROR log levels)"
./harlFilter WARNING
echo "====="

echo
echo "===== ERROR (should print only the ERROR log level)"
./harlFilter ERROR
echo "====="
