protoc -I ../proto --grpc_out=. --cpp_out=. ../proto/pmx_grpc.proto --plugin="protoc-gen-grpc=/usr/bin/grpc_cpp_plugin"
protoc -I ../proto --grpc_out=. --cpp_out=. ../proto/port.proto --plugin="protoc-gen-grpc=/usr/bin/grpc_cpp_plugin"
protoc -I ../proto --grpc_out=. --cpp_out=. ../proto/output_ports.proto --plugin="protoc-gen-grpc=/usr/bin/grpc_cpp_plugin"
