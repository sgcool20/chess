cmake_minimum_required(VERSION 3.20)
project(chess)

set(CMAKE_CXX_STANDARD 14)

add_executable(chess main.cpp piece.cpp piece.h board.cpp board.h slot.cpp slot.h king.cpp king.h bishop.cpp bishop.h pawn.cpp pawn.h queen.cpp queen.h rook.cpp rook.h knight.cpp knight.h player.cpp player.h game.cpp game.h)
