// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: pmx_grpc.proto

#include "pmx_grpc.pb.h"
#include "pmx_grpc.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace pmx {
namespace grpc {

static const char* PmxGrpc_method_names[] = {
  "/pmx.grpc.PmxGrpc/ListPorts",
  "/pmx.grpc.PmxGrpc/SetOutputPorts",
  "/pmx.grpc.PmxGrpc/SetupInputPort",
};

std::unique_ptr< PmxGrpc::Stub> PmxGrpc::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PmxGrpc::Stub> stub(new PmxGrpc::Stub(channel, options));
  return stub;
}

PmxGrpc::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_ListPorts_(PmxGrpc_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetOutputPorts_(PmxGrpc_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetupInputPort_(PmxGrpc_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PmxGrpc::Stub::ListPorts(::grpc::ClientContext* context, const ::pmx::grpc::ListPortsRequest& request, ::pmx::grpc::ListPortsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::pmx::grpc::ListPortsRequest, ::pmx::grpc::ListPortsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListPorts_, context, request, response);
}

void PmxGrpc::Stub::async::ListPorts(::grpc::ClientContext* context, const ::pmx::grpc::ListPortsRequest* request, ::pmx::grpc::ListPortsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::pmx::grpc::ListPortsRequest, ::pmx::grpc::ListPortsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListPorts_, context, request, response, std::move(f));
}

void PmxGrpc::Stub::async::ListPorts(::grpc::ClientContext* context, const ::pmx::grpc::ListPortsRequest* request, ::pmx::grpc::ListPortsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListPorts_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::pmx::grpc::ListPortsResponse>* PmxGrpc::Stub::PrepareAsyncListPortsRaw(::grpc::ClientContext* context, const ::pmx::grpc::ListPortsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::pmx::grpc::ListPortsResponse, ::pmx::grpc::ListPortsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListPorts_, context, request);
}

::grpc::ClientAsyncResponseReader< ::pmx::grpc::ListPortsResponse>* PmxGrpc::Stub::AsyncListPortsRaw(::grpc::ClientContext* context, const ::pmx::grpc::ListPortsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListPortsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status PmxGrpc::Stub::SetOutputPorts(::grpc::ClientContext* context, const ::pmx::grpc::SetOutputPortsRequest& request, ::pmx::grpc::Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::pmx::grpc::SetOutputPortsRequest, ::pmx::grpc::Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetOutputPorts_, context, request, response);
}

void PmxGrpc::Stub::async::SetOutputPorts(::grpc::ClientContext* context, const ::pmx::grpc::SetOutputPortsRequest* request, ::pmx::grpc::Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::pmx::grpc::SetOutputPortsRequest, ::pmx::grpc::Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetOutputPorts_, context, request, response, std::move(f));
}

void PmxGrpc::Stub::async::SetOutputPorts(::grpc::ClientContext* context, const ::pmx::grpc::SetOutputPortsRequest* request, ::pmx::grpc::Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetOutputPorts_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::pmx::grpc::Response>* PmxGrpc::Stub::PrepareAsyncSetOutputPortsRaw(::grpc::ClientContext* context, const ::pmx::grpc::SetOutputPortsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::pmx::grpc::Response, ::pmx::grpc::SetOutputPortsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetOutputPorts_, context, request);
}

::grpc::ClientAsyncResponseReader< ::pmx::grpc::Response>* PmxGrpc::Stub::AsyncSetOutputPortsRaw(::grpc::ClientContext* context, const ::pmx::grpc::SetOutputPortsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetOutputPortsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status PmxGrpc::Stub::SetupInputPort(::grpc::ClientContext* context, const ::pmx::grpc::SetupInputPortRequest& request, ::pmx::grpc::Response* response) {
  return ::grpc::internal::BlockingUnaryCall< ::pmx::grpc::SetupInputPortRequest, ::pmx::grpc::Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetupInputPort_, context, request, response);
}

void PmxGrpc::Stub::async::SetupInputPort(::grpc::ClientContext* context, const ::pmx::grpc::SetupInputPortRequest* request, ::pmx::grpc::Response* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::pmx::grpc::SetupInputPortRequest, ::pmx::grpc::Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetupInputPort_, context, request, response, std::move(f));
}

void PmxGrpc::Stub::async::SetupInputPort(::grpc::ClientContext* context, const ::pmx::grpc::SetupInputPortRequest* request, ::pmx::grpc::Response* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetupInputPort_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::pmx::grpc::Response>* PmxGrpc::Stub::PrepareAsyncSetupInputPortRaw(::grpc::ClientContext* context, const ::pmx::grpc::SetupInputPortRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::pmx::grpc::Response, ::pmx::grpc::SetupInputPortRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetupInputPort_, context, request);
}

::grpc::ClientAsyncResponseReader< ::pmx::grpc::Response>* PmxGrpc::Stub::AsyncSetupInputPortRaw(::grpc::ClientContext* context, const ::pmx::grpc::SetupInputPortRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetupInputPortRaw(context, request, cq);
  result->StartCall();
  return result;
}

PmxGrpc::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PmxGrpc_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PmxGrpc::Service, ::pmx::grpc::ListPortsRequest, ::pmx::grpc::ListPortsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](PmxGrpc::Service* service,
             ::grpc::ServerContext* ctx,
             const ::pmx::grpc::ListPortsRequest* req,
             ::pmx::grpc::ListPortsResponse* resp) {
               return service->ListPorts(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PmxGrpc_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PmxGrpc::Service, ::pmx::grpc::SetOutputPortsRequest, ::pmx::grpc::Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](PmxGrpc::Service* service,
             ::grpc::ServerContext* ctx,
             const ::pmx::grpc::SetOutputPortsRequest* req,
             ::pmx::grpc::Response* resp) {
               return service->SetOutputPorts(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PmxGrpc_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PmxGrpc::Service, ::pmx::grpc::SetupInputPortRequest, ::pmx::grpc::Response, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](PmxGrpc::Service* service,
             ::grpc::ServerContext* ctx,
             const ::pmx::grpc::SetupInputPortRequest* req,
             ::pmx::grpc::Response* resp) {
               return service->SetupInputPort(ctx, req, resp);
             }, this)));
}

PmxGrpc::Service::~Service() {
}

::grpc::Status PmxGrpc::Service::ListPorts(::grpc::ServerContext* context, const ::pmx::grpc::ListPortsRequest* request, ::pmx::grpc::ListPortsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PmxGrpc::Service::SetOutputPorts(::grpc::ServerContext* context, const ::pmx::grpc::SetOutputPortsRequest* request, ::pmx::grpc::Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status PmxGrpc::Service::SetupInputPort(::grpc::ServerContext* context, const ::pmx::grpc::SetupInputPortRequest* request, ::pmx::grpc::Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace pmx
}  // namespace grpc

