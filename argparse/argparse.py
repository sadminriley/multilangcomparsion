import argparse
parser = argparse.ArgumentParser(description='script')
parser.add_argument('server',
                    help='Server')
parser.add_argument('-c',
                    help='Command')
parser.add_argument('-a',
                    help='arguments')

args = parser.parse_args()
