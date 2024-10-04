import XCTest
import SwiftTreeSitter
import TreeSitterKulala

final class TreeSitterKulalaTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_kulala())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Kulala grammar")
    }
}
