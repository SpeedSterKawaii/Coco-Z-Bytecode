(unsigned int *)&v9,
    (int)"local LocalPlayer\n"
         "repeat\n"
         "LocalPlayer = game:GetService(\"Players\").LocalPlayer\n"
         until LocalPlayer ~= nil\n
         game:GetService(\"RunService\").RenderStepped:Connect(function() CocoScriptService() end)
