open Jest;

let () =
  describe(
    "node-sass",
    ExpectJs.(
      () => {
        test("#render", () =>
          expect(
            NodeSass.renderSync("__tests__/resources/index.sass") |> Node.Buffer.toString
          )
          |> toBe({|h1 {
  color: green; }
|})
        );
      }
    ),
  );
