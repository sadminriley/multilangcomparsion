local argparse = require "argparse"

local parser = argparse('script')
parser:argument('server', 'Server')
parser:argument('-c', 'Command')
parser:argument('-a', 'arguments')

local args = parser:parse()
print(args)
