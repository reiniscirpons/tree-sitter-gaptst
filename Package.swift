// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGaptst",
    products: [
        .library(name: "TreeSitterGaptst", targets: ["TreeSitterGaptst"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterGaptst",
                dependencies: [],
                path: ".",
                sources: [
                    "src/parser.c",
                    "src/scanner.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGaptstTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGaptst",
            ],
            path: "bindings/swift/TreeSitterGaptstTests"
        )
    ],
    cLanguageStandard: .c11
)
